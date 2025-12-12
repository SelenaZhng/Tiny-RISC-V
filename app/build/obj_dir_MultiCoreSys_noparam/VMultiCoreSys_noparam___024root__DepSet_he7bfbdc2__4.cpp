// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1011__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1012__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1013__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1014__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1015__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1016__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1017__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1018__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1019__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1020__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1021__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1022__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1023__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1024__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1025__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1026__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1028__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1029__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1030__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1031__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1032__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1033__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1034__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1035__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1027__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1037__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1038__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1039__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1040__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1041__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1042__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1043__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1044__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1036__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1046__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1047__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1048__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1049__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1050__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1051__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1052__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1053__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1045__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1054__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1055__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1056__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1057__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1058__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1059__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1060__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1061__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1062__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1063__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1064__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1065__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1066__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1067__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1068__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__append_str__1069__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1071__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1072__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1073__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1074__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace__1070__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1076__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1077__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1078__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1079__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace__1075__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1081__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1082__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1083__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1084__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace__1080__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1085__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1086__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1087__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1088__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1089__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1090__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1091__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1092__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1093__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1094__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1095__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1096__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1097__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1098__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1099__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1100__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1101__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1102__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1104__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1105__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1106__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1107__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1108__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1109__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1110__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1111__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1103__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1113__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1114__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1115__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1116__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1117__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1118__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1119__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1120__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1112__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                         >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                           >> 0x18U)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[5U] 
                                                  >> 0x10U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1122__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1123__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1124__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1125__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1126__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1127__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1128__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1129__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1121__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1131__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1132__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1133__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1134__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1135__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1136__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1137__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1138__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1130__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_msg
                                      [0U][5U] >> 0x1aU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_msg
                           [0U][5U] >> 0x18U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__channels_ccw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1140__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1141__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1142__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1143__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1144__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1145__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_str__1146__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_chars__1147__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1139__trace);
}
