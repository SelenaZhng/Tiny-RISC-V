// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam__Syms.h"
#include "VMultiCoreDataCache_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1807__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1808__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1809__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1810__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1811__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1812__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1813__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1814__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1815__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1816__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1817__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1818__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1819__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1820__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1821__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1822__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1824__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1825__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1826__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1827__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1828__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1829__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1830__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1831__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1823__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1833__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1834__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1835__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1836__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1837__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1838__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1839__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1840__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1832__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1842__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1843__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1844__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1845__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1846__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1847__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1848__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1849__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1841__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1850__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1851__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1852__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1853__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1854__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1855__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1856__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1857__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1858__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1859__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1860__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1861__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1862__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1863__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1864__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace, trace_str);
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace[0U];
    vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace[0U] 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1865__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1867__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1868__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1869__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1870__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1866__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1872__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1873__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1874__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1875__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1871__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1877__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1878__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1879__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1880__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1876__trace_str);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1881__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1882__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1883__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1884__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1885__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1886__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1887__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1888__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1889__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1890__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1891__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1892__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1893__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1894__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1895__trace);
    } else if ((1U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1896__trace);
    } else if ((2U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1897__trace);
    } else if ((3U == MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace, trace_str);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1898__trace);
    }
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1900__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1901__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1902__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1903__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1904__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1905__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1906__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1907__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1899__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1909__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1910__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1911__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1912__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1913__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1914__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1915__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1916__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1908__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1918__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1919__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1920__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1921__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1922__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1923__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1924__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1925__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1917__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1927__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1928__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1929__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1930__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1931__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1932__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1933__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1934__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1926__trace);
}

void VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP(VMultiCoreDataCache_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root____Vdpiexp_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace);
    CData/*7:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__char;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__num;
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_rdy
        [0U];
    __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val 
        = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, trace_str);
    MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy) 
         & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1936__trace);
    } else if (((IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy) 
                & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val)))) {
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__num 
            = MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1937__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy)) 
                & (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str, VMultiCoreDataCache_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1938__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1939__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str, VMultiCoreDataCache_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1940__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1941__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str, VMultiCoreDataCache_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1942__trace);
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__num 
            = (MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace[0U];
        vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__char);
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace[0U] 
            = vlSymsp->TOP.MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1943__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1935__trace);
}
