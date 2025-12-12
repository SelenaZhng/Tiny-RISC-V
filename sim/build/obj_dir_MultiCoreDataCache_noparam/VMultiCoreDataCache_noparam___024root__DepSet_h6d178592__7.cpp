// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam__Syms.h"
#include "VMultiCoreDataCache_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1163__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1164__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1165__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1166__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1167__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1168__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1169__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1170__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1171__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1172__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1173__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1174__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1175__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1176__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1177__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1178__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1179__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1180__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1182__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1183__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1184__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1185__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1186__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1187__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1188__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1189__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1181__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1191__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1192__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1193__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1194__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1195__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1196__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1197__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1198__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1190__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1200__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1201__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1202__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1203__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1204__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1205__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1206__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1207__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1199__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1208__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1209__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1210__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1211__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1212__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1213__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1214__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1215__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1216__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1217__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1218__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1219__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1220__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1221__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1222__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace, trace_str);
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace[0U];
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace[0U] 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1223__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1225__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1226__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1227__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1228__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1224__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1230__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1231__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1232__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1233__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1229__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1235__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1236__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1237__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1238__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1234__trace_str);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1239__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1240__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1241__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1242__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1243__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1244__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1245__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1246__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1247__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1248__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1249__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1250__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1251__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1252__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1253__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1254__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1255__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1256__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1258__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1259__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1260__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1261__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1262__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1263__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1264__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1265__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1257__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1267__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1268__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1269__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1270__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1271__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1272__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1273__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1274__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1266__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x38U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x30U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1276__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1277__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1278__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1279__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1280__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1281__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1282__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1283__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1275__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
                                              [0U] 
                                              >> 0x3aU))),
                  2,(3U & (IData)((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
                                   [0U] >> 0x38U))));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1285__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1286__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1287__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1288__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1289__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1290__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1291__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1292__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1284__trace);
}
