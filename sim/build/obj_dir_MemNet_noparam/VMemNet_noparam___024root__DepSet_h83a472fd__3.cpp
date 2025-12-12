// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam__Syms.h"
#include "VMemNet_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h77bdfd62_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__451__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__452__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__453__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__454__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__455__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__456__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__457__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__458__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__459__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__460__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__461__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__462__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__463__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__464__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__465__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__466__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_haead36df_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__468__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__469__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__470__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__471__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__472__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__473__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__474__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__475__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__467__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__477__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__478__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__479__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__480__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__481__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__482__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__483__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__484__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__476__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__486__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__487__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__488__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__489__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__490__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__491__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__492__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__493__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__485__trace);
}

extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMemNet_noparam__ConstPool__CONST_h803d56e6_0;

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__494__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__495__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__496__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__497__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__498__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__499__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__500__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__501__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__502__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__503__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__504__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__505__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__506__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str, VMemNet_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__507__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__508__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str, VMemNet_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace, trace_str);
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace[0U];
    vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace[0U] 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__509__trace);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__511__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__512__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__513__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__514__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__510__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__516__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__517__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__518__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__519__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__515__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__521__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__522__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__523__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__524__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__520__trace_str);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__525__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__526__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__527__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__528__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__529__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__530__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__531__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__532__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__533__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__534__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__535__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__536__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__537__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__538__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str, VMemNet_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__539__trace);
    } else if ((1U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__540__trace);
    } else if ((2U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str, VMemNet_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__541__trace);
    } else if ((3U == MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace, trace_str);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__542__trace);
    }
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__544__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__545__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__546__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__547__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__548__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__549__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__550__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__551__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__543__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__553__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__554__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__555__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__556__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__557__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__558__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__559__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__560__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__552__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__562__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__563__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__564__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__565__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__566__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__567__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__568__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__569__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__561__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__571__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__572__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__573__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__574__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__575__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__576__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__577__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__578__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__570__trace);
}

void VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP(VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemNet_noparam___024root____Vdpiexp_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val = 0;
    CData/*0:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str);
    VlWide<128>/*4095:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace;
    VL_ZERO_W(4096, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace);
    CData/*7:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__char;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__char = 0;
    IData/*31:0*/ __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__num;
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_rdy
        [0U];
    __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val 
        = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__channels_ccw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, trace_str);
    MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy) 
         & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__str);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__580__trace);
    } else if (((IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy) 
                & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val)))) {
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__num 
            = MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__581__trace);
    } else if (((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy)) 
                & (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str, VMemNet_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__582__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__583__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__rdy)) 
                      & (~ (IData)(__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str, VMemNet_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__584__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__585__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str, VMemNet_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__586__trace);
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__num 
            = (MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace[0U];
        vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__char);
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace[0U] 
            = vlSymsp->TOP.MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__587__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MemNet_noparam__DOT__v__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__579__trace);
}
