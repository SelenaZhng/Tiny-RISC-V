// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam__Syms.h"
#include "VMultiCoreDataCache_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2268__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__2269__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2270__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__2271__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2272__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__2273__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2274__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2275__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2276__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__2277__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2278__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2279__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2280__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__2281__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2282__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2283__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2284__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__2285__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2287__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2288__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2289__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2290__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2291__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2292__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2293__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2294__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2286__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2296__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2297__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2298__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2299__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2300__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2301__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2302__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2303__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2295__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2305__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2306__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2307__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2308__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2309__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2310__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2311__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2312__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2304__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2313__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2314__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2315__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2316__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2317__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2318__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2319__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2320__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2321__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2322__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2323__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2324__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2325__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2326__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2327__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace, trace_str);
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace[0U];
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace[0U] 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__2328__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2330__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2331__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2332__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2333__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__2329__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2335__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2336__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2337__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2338__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__2334__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2340__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2341__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2342__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2343__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__2339__trace_str);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2344__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__2345__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2346__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__2347__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2348__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__2349__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2350__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2351__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2352__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__2353__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2354__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2355__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2356__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__2357__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2358__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2359__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2360__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__2361__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2363__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2364__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2365__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2366__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2367__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2368__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__2369__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__2370__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__2362__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2372__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2373__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2374__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2375__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2376__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2377__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__2378__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__2379__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__2371__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2381__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2382__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2383__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2384__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2385__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2386__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__2387__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__2388__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__2380__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
                                      [0U][4U] >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
                           [0U][4U] >> 0x1aU)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2390__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2391__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2392__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2393__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2394__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2395__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__2396__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__2397__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__2389__trace);
}
