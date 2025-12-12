// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheNet_noparam.h for the primary calling header

#include "VCacheNet_noparam__pch.h"
#include "VCacheNet_noparam__Syms.h"
#include "VCacheNet_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__760__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__append_str__761__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__762__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__append_str__763__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__764__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__append_str__765__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__766__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__767__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__768__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__append_str__769__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__770__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__771__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__772__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__append_str__773__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__774__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__775__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__776__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__append_str__777__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_haead36df_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
        [0U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__779__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__780__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__781__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__782__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__783__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__784__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__785__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__786__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__778__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__788__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__789__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__790__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__791__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__792__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__793__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__794__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__795__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__787__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__797__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__798__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__799__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__800__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__801__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__802__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__803__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__804__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__796__trace);
}

extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VCacheNet_noparam__ConstPool__CONST_h803d56e6_0;

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__805__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__806__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__807__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__808__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__809__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__810__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__811__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__812__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__813__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__814__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__815__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__816__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__817__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__818__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__819__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str, VCacheNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace, trace_str);
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace[0U];
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace[0U] 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__append_str__820__trace);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__822__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__823__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__824__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__825__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace__821__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__827__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__828__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__829__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__830__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace__826__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__832__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__833__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__834__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__835__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace__831__trace_str);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__836__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__append_str__837__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__838__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__append_str__839__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__840__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__append_str__841__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__842__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__843__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__844__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__append_str__845__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__846__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__847__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__848__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__append_str__849__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__850__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__851__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__852__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__append_str__853__trace);
    }
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
        [0U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__855__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__856__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__857__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__858__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__859__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__860__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__861__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__862__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__854__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
        [1U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__864__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__865__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__866__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__867__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__868__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__869__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__870__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__871__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__863__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val = 0;
    CData/*0:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace);
    CData/*7:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__char;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__char = 0;
    IData/*31:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__num;
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
        [2U];
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy) 
         & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__str);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__873__trace);
    } else if (((IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy) 
                & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val)))) {
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__num 
            = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__874__trace);
    } else if (((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy)) 
                & (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__875__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__876__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__rdy)) 
                      & (~ (IData)(__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__877__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__878__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str, VCacheNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__879__trace);
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__num 
            = (CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__char);
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__880__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__872__trace);
}

void VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__line_trace_TOP(VCacheNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root____Vdpiexp_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str;
    VL_ZERO_W(4096, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__881__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__882__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__883__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__884__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__885__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__886__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__887__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__888__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__889__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__890__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__891__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__892__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__893__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str, VCacheNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__894__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace, trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__895__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str, VCacheNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace, trace_str);
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace[0U];
    vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace[0U] 
        = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__append_str__896__trace);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__898__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__899__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__900__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__901__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace__897__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__903__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__904__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__905__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__906__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace__902__trace_str);
    VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str, trace_str);
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str, VCacheNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__908__trace);
    } else if ((1U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str, VCacheNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__909__trace);
    } else if ((2U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str, VCacheNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__910__trace);
    } else if ((3U == CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str, VCacheNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace[0U];
        vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace[0U] 
            = vlSymsp->TOP.CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__911__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace__907__trace_str);
}
