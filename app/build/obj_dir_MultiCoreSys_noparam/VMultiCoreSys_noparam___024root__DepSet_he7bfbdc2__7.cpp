// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1472__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__append_str__1473__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1474__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__append_str__1475__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1476__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__append_str__1477__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1478__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1479__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1480__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__append_str__1481__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1482__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1483__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1484__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__append_str__1485__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1486__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1487__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1488__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__append_str__1489__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1491__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1492__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1493__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1494__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1495__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1496__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1497__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1498__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1490__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1500__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1501__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1502__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1503__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1504__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1505__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1506__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1507__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1499__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1509__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1510__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1511__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1512__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1513__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1514__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1515__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1516__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1508__trace);
}

extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0;

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1517__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1518__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1519__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1520__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1521__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1522__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1523__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1524__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1525__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1526__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1527__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1528__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1529__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str, VMultiCoreSys_noparam__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1530__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1531__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str, VMultiCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace, trace_str);
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
        = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace[0U];
    vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace[0U] 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__append_str__1532__trace);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1534__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1535__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1536__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1537__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace__1533__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1539__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1540__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1541__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1542__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace__1538__trace_str);
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1544__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1545__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1546__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1547__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace__1543__trace_str);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1548__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__append_str__1549__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1550__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__append_str__1551__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1552__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__append_str__1553__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1554__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1555__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1556__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__append_str__1557__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1558__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1559__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1560__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__append_str__1561__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str, VMultiCoreSys_noparam__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1562__trace);
    } else if ((1U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1563__trace);
    } else if ((2U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str, VMultiCoreSys_noparam__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1564__trace);
    } else if ((3U == MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace, trace_str);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__append_str__1565__trace);
    }
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1567__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1568__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1569__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1570__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1571__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1572__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__1573__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__1574__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__1566__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [1U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1576__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1577__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1578__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1579__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1580__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1581__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__1582__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__1583__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__1575__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                         >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                           >> 0x1aU)),8,(0xffU & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U] 
                                                  >> 0x12U)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
        [2U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1585__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1586__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1587__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1588__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1589__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1590__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__1591__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__1592__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__1584__trace);
}

void VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP(VMultiCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root____Vdpiexp_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val = 0;
    CData/*0:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str);
    VlWide<128>/*4095:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace;
    VL_ZERO_W(4096, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace);
    CData/*7:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__char;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__char = 0;
    IData/*31:0*/ __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__num;
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str
                  ,"%x>%x",0,2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_msg
                                      [0U][4U] >> 0x1cU)),
                  2,(3U & (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_msg
                           [0U][4U] >> 0x1aU)));
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_rdy
        [0U];
    __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val 
        = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, trace_str);
    MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1))))))) {
        MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy) 
         & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__str);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1594__trace);
    } else if (((IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy) 
                & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val)))) {
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__num 
            = MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1;
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1595__trace);
    } else if (((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy)) 
                & (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str, VMultiCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1596__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1597__trace);
    } else if ((1U & ((~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__rdy)) 
                      & (~ (IData)(__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__val))))) {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str, VMultiCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1598__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1599__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str, VMultiCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_str__1600__trace);
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__num 
            = (MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace[0U];
        vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0)), __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__char);
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace[0U] 
            = vlSymsp->TOP.MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_chars__1601__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__append_val_rdy_str__1593__trace);
}
